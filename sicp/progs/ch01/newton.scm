(define (square x) (* x x))

(define (abs x)
  (if (> x 0)
      x
      (- x)))

(define (sqrt-iter guess x)
  (if (good-enough? guess x)
      guess
      (sqrt-iter (improve guess x) x)))

(define (improve guess x)
  (average guess (/ x guess)))

(define (average x y)
  (/ (+ x y) 2))

(define (good-enough? guess x)
  (< (abs (- (square guess) x)) 0.001))

(define (improved-good-enough?  guess x)
  (< (abs (- (square guess) x)) (/ x 10000)))

(define (improved-sqrt-iter guess x)
  (if (improved-good-enough? guess x)
      guess
      (improved-sqrt-iter (improve guess x) x)))

(define (msqrt x)
  (sqrt-iter 1.0 x))

(define (isqrt x)
  (improved-sqrt-iter 1.0 x))

(define (mcube x)
  (* x x x))

(define (cb-good-enough? guess x)
  (< (abs (- (mcube guess) x)) (/ x 100000)))

(define (cb-improve y x)
  (/ (+ (/ x (square y)) (* 2 y)) 3))

(define (cbrt-iter guess x)
  (if (cb-good-enough? guess x)
      guess
      (cbrt-iter (cb-improve guess x) x)))

(define (mcbrt x)
  (cond ((> x 0) (cbrt-iter 1.0 x))
	((< x 0) (- (cbrt-iter 1.0 (- x))))
	(else 0)))
