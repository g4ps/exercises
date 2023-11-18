(define (fact x)
  (cond ((> x 0) (* x (fact (- x 1))))
	(else 1)))

(define (ifact x)
  (define (fact-iter prod counter)
    (if (> counter x)
        prod
	(fact-iter (* counter prod)
		   (+ counter 1)
		   )
	)
    )
  (fact-iter 1 1)
  )

(define (bc m n) (/ (factorial m) (* (factorial n) (factorial (- m n)))))
