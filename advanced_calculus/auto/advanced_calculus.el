(TeX-add-style-hook
 "advanced_calculus"
 (lambda ()
   (TeX-add-to-alist 'LaTeX-provided-class-options
                     '(("book" "11pt" "oneside" "titlepage")))
   (TeX-run-style-hooks
    "latex2e"
    "book"
    "bk11"
    "amsmath"
    "amssymb"
    "geometry"
    "hyperref"))
 :latex)

