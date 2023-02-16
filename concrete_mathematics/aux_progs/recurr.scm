

(define (zz n) (if (= n 0)
		   1
		   (+ (zz (- n 1)) n (* 8 (- n 1)))
		   )
  )

(define (josep n)
  (define % modulo)
  (cond ((= n 1) 1)
	((= (% n 2) 0) (- (* 2 (josep (/ n 2))) 1))
	((= (% n 2) 1) (+ (* 2 (josep (/ (- n 1) 2))) 1))
	)
  )
     
(define (penum n)
  (define % modulo)
  (cond ((< n 3) -1)
	((= n 3) 1)
	((= n 4) 3)
	((= n 5) 5)
	((= (% n 2) 0) (- (* 2 (penum (/ n 2))) 1))
	((= (% n 2) 1) (+ (* 2 (penum (/ (- n 1) 2))) 1))
	)
  )

     
(define (mpenum n)
  (define % modulo)
  (cond ((< n 2) -1)
	((= n 2) 2)
	((= n 3) 1)
	((= (% n 2) 0) (- (* 2 (mpenum (/ n 2))) 1))
	((= (% n 2) 1) (+ (* 2 (mpenum (/ (- n 1) 2))) 1))
	)
  )
