#!/usr/bin/env python3
"""
HM Crypto Logo SVG to PNG Converter
Converts SVG logo files to PNG format in multiple resolutions
"""

import os
import sys
from pathlib import Path

try:
    import cairosvg
    from PIL import Image
except ImportError:
    print("Required packages not installed. Installing now...")
    import subprocess
    subprocess.check_call([sys.executable, "-m", "pip", "install", "cairosvg", "pillow"])
    import cairosvg
    from PIL import Image

def convert_svg_to_png(svg_file, output_dir, sizes=[256, 512, 1024, 2048]):
    """
    Convert SVG file to PNG in multiple sizes
    
    Args:
        svg_file: Path to SVG file
        output_dir: Directory to save PNG files
        sizes: List of sizes (width/height in pixels)
    """
    # Create output directory if it doesn't exist
    Path(output_dir).mkdir(parents=True, exist_ok=True)
    
    # Get the base filename without extension
    base_name = Path(svg_file).stem
    
    print(f"\nConverting {svg_file}...")
    
    for size in sizes:
        output_file = os.path.join(output_dir, f"{base_name}_{size}x{size}.png")
        
        try:
            # Convert SVG to PNG using cairosvg
            cairosvg.svg2png(
                url=svg_file,
                write_to=output_file,
                output_width=size,
                output_height=size
            )
            
            # Optimize the PNG using PIL
            img = Image.open(output_file)
            img.save(output_file, "PNG", optimize=True)
            
            print(f"  ✓ Created {output_file} ({size}x{size})")
            
        except Exception as e:
            print(f"  ✗ Error creating {size}x{size}: {str(e)}")

def create_favicon(svg_file, output_dir):
    """
    Create favicon.ico from SVG
    
    Args:
        svg_file: Path to SVG file
        output_dir: Directory to save favicon
    """
    try:
        # Convert to small PNG first
        temp_png = os.path.join(output_dir, "temp_favicon.png")
        cairosvg.svg2png(
            url=svg_file,
            write_to=temp_png,
            output_width=32,
            output_height=32
        )
        
        # Convert to ICO
        img = Image.open(temp_png)
        favicon_path = os.path.join(output_dir, f"{Path(svg_file).stem}_favicon.ico")
        img.save(favicon_path, "ICO", sizes=[(16, 16), (32, 32), (48, 48)])
        
        # Remove temp file
        os.remove(temp_png)
        
        print(f"  ✓ Created favicon: {favicon_path}")
        
    except Exception as e:
        print(f"  ✗ Error creating favicon: {str(e)}")

def main():
    """Main function to convert all HM crypto logos"""
    
    print("=" * 60)
    print("HM CRYPTO LOGO CONVERTER")
    print("Converting SVG logos to PNG format")
    print("=" * 60)
    
    # Define SVG files to convert
    svg_files = [
        "hm-crypto-logo-1.svg",
        "hm-crypto-logo-2.svg",
        "hm-crypto-logo-3.svg"
    ]
    
    # Output directory for PNG files
    output_dir = "png"
    
    # Sizes for PNG export (in pixels)
    sizes = [256, 512, 1024, 2048]
    
    # Check if SVG files exist
    missing_files = []
    for svg_file in svg_files:
        if not os.path.exists(svg_file):
            missing_files.append(svg_file)
    
    if missing_files:
        print(f"\n⚠ Warning: The following SVG files were not found:")
        for file in missing_files:
            print(f"  - {file}")
        print("\nMake sure the SVG files are in the same directory as this script.")
        svg_files = [f for f in svg_files if f not in missing_files]
    
    if not svg_files:
        print("\n✗ No SVG files found to convert.")
        return
    
    # Convert each SVG file
    for svg_file in svg_files:
        convert_svg_to_png(svg_file, output_dir, sizes)
        
        # Also create favicon for each design
        create_favicon(svg_file, output_dir)
    
    print("\n" + "=" * 60)
    print("CONVERSION COMPLETE!")
    print(f"PNG files saved in: {os.path.abspath(output_dir)}/")
    print("=" * 60)
    
    # Display summary
    print("\nGenerated files:")
    for svg_file in svg_files:
        base_name = Path(svg_file).stem
        print(f"\n{base_name}:")
        for size in sizes:
            print(f"  • {base_name}_{size}x{size}.png")
        print(f"  • {base_name}_favicon.ico")
    
    print("\nUsage tips:")
    print("  • 256x256: Perfect for social media avatars")
    print("  • 512x512: Good for website headers")
    print("  • 1024x1024: High quality for presentations")
    print("  • 2048x2048: Ultra HD for print materials")
    print("  • favicon.ico: For website browser tab icons")

if __name__ == "__main__":
    main()