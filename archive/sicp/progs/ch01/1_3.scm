(define (square x) (* x x))

(define (sum_of_squares a b) (+ (square a) (square b)))

(define (pr a b c)
  ;; (+ a b c))
  (cond ((and (> b a) (> c a)) (sum_of_squares b c))
	((and (> b c) (> a c)) (sum_of_squares a b))
	(else (sum_of_squares a c))
	)
  )


(map display (list "For 4 and 5 we've got " (sum_of_squares 4 5) "\nAnd for 6 and -7 we've got "
	       (sum_of_squares 6 -7) "\n"))
