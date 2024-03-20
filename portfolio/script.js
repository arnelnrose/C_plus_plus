// Toggle icon and navbar
document.querySelector("#menu-icon").onclick = () => {
  document.querySelector("#menu-icon").classList.toggle("bx-x");
  document.querySelector(".navbar").classList.toggle("active");
};

// Scroll Sections Active
window.onscroll = () => {
  let navLinks = document.querySelectorAll("header nav a");
  let top = window.scrollY;

  document.querySelectorAll("section").forEach((sec) => {
    let offset = sec.offsetTop - 150;
    let height = sec.offsetHeight;
    let id = sec.getAttribute("id");

    if (top >= offset && top < offset + height) {
      navLinks.forEach((link) => {
        link.classList.remove("active");
      });
      document
        .querySelector("header nav a[href*=" + id + "]")
        .classList.add("active");
    }
  });

  // Sticky Navbar
  document.querySelector("header").classList.toggle("sticky", top > 100);

  // Remove toggle icon and navbar when click navbar link (scroll)
  document.querySelector("#menu-icon").classList.remove("bx-x");
  document.querySelector(".navbar").classList.remove("active");
};

// Scroll Reveal
ScrollReveal({ reset: true, distance: "80px", duration: 2000, delay: 200 });

ScrollReveal().reveal(".home-content, .heading", { origin: "top" });
ScrollReveal().reveal(".home-img, .portfolio-box, .contact form", {
  origin: "bottom",
});
ScrollReveal().reveal(".home-content h1, .about img", { origin: "left" });
ScrollReveal().reveal(".home-content p, .about-content", { origin: "right" });

// Type JS
new Typed(".multi-text", {
  strings: ["IT Field Engineer", "SO Branch Head"],
  typeSpeed: 100,
  backSpeed: 100,
  backDelay: 1000,
  loop: true,
});
