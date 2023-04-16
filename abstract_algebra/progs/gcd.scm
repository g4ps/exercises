(define (m_gcd a b)
  (if (= b 0)
      (begin
	(map display (list a "\n"))
	a)
      (begin
	(map display (list "(" a ", " b ") = " ) )
	(m_gcd b (remainder a b))
	)
      )
  )
