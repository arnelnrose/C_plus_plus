/* Background */
window.onload = function() {Particles.init ({selector: '.background'});
};

/* Sticky Header */
window.addEventListener("scroll", function () {
    var header = document.querySelector("header");
    header.classList.toggle("sticky", windows.scrollY > 0);
  });