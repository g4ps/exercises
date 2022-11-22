Now proposition is than $x_{n - 1} + y_{n - 1} = s$,
$x_{n - 1} \in C_{n - 1}$ and $y_{n - 1} \in C_{n - 1}$.

Let the length of closed interval, that composes $C_n$ be equal to $l$
(i.e. 1/3 for $C_1$, 1/9 for $C_2$ and so on; rigorously it'll be equal
to $3^{-n}$). 
Then pick interval  $I_x \subseteq \in C_n$ 
such  $I_x$ is the "largest"
interval, that composes $C_n$ with the property that
$\exists i \in I_x: i \leq x_{n - 1}$ (largest
in this context rigorously means that
$\forall n \in N: u \in I_n, o \in I_x \to u < o$; in a more lay terms
pick the one, that is furthest to the right, but which either contains or
less than $x_{n - 1}$). Define in the same style $I_y$ for $y_{n - 1}$.
Then pick $q_x$ and $q_y$ be the lowest numbers in corresponding intervals.

Let us now look closer at $q_x$ and $q_y$. Because $q_x$ is a lower bound
for interval in $C_n$,
we can state, that $[q_x,q_x + l]$ is in $C_n$. If $x_{n - 1} \in C_n$, then it
is the end of the story and the only can set new $x_n$ to the $[q_x + l]$.
Otherwise, we also get interval $[q_x + 2l, q_x + 3l]$ in our disposal.


$x_{n - 1} \in C_{n - 1}$  implies that $x_{n - 1} - q_x \leq 2l$.
Same applies to $y_{n - 1}$. 
Thus it follows, that $x_{n - 1} + y_{n - 1} - (q_x + q_y) \leq 4l$,
where $l$ is the length of an interval in $C_n$.

Now let $k = x_{n - 1} + y_{n - 1} - (q_x + q_y) \leq l$.

If $k \leq l$ then set $x_n = q_x$ and $y_n = q_y + k$.

If $l < k \leq 2l$ then set $x_n = q_x + l$ and $y_n + (k - l)$.

If $2l < k \leq 3l$ then set $x_n = q_x + 2l$ and $y_n + (k - 2l)$ (given that
$x_{n - 1} \notin C_n$; If $x_{n - 1} \in C_n$, set $x_n = q_x (k - 2l)$
and $y = q_y + 2l$)

If $k \leq 4l$ then set $x_n = q_x + 3l$ and $y_n + (k - 3l)$.

Thus we can state, that $\exists x_n, y_n \in C_n$ for all $n \in N$.

\textit{(b) Keeping in mind that the sequences $(x_n)$ and $(y_n)$ do not
  necessarily converge, showhow they can nevertheless be used to produce the
  desired $x$ and $y$ in $C$ satisfying $x + y = s$}

Because sequences $(x_n)$ and $(y_n)$ are contained in $C$, we can conclude,
that they are bounded. Therefore they have a convergent subsequence
$(x_{n_k}) \to x$ and $(y_{n_k}) \to y$.
Therefore $(x_{n_k} + y_{n_k}) \to x + y$.
But we know that  $x_n + y_n = s$ for every
$n \in N$ (by the definition of the sequence). Thus, sequence
$(x_n + y_n) \to s$. We know, that subsequences of convergent sequence converge
to the same limit. Thus, $(x_{n_k} + y_{n_k}) \to s$. Because same sequence
cannot converge to two different limits we can conclude that $s = x + y$,
as desired.

\section*{3.3.7}
\textit{Decide whether the following propositions are true or false. If the claim is valid, supply a short proof, and if the claim is false, provide a counterexample.}

\textit{(a) An arbitrary intersection of compact sets is compact.}

I want to note here firstly, that by our definitions, $\emptyset$ is a
compact set

Every element of out arbitrary intersection is contained in the first set.
Thus, the intersection is bounded. We know, tha arbitrary intersection of
closed sets is closed. Thus, the intersection is closed as well. Thus it
is closed and bounded. Thus it it compact.

\textit{(b) Let $A \subseteq \textbf{R}$ be arbitrary, and let
  $K \subseteq \textbf{R}$ be compact. Then, the intersection $A \cap K$ is
  compact}

False. $[0, 1] \cap (0, 1) = (0, 1)$.

\textit{(c) If $F_1 \supseteq F_2 \supseteq F_3 ... $ is a nested sequence
  of nonempty closed sets, then the intersection
  $\cap_{n = 1}^{\infty} F_n \neq \emptyset$}

False. Let $F_n = [n, \infty)$.

\textit{(d) A finite set is always compact.}

True. It contains only isolated points and therefore is closed. Also,
we can find the maximum and minimum of it, therefore it is bounded.

\textit{(e) A countable set is always compact}

False. $N$ is not bounded, $Q$ is not closed.

\section*{3.3.8}
\textit{Follow these steps to prove the final implication in Theorem 3.3.8.}

\textit{Assume $K$ satisfies (i) and (ii), and let
  $\{O_\lambda: \lambda \in \Lambda \}$ be an open cover for $K$. For contradiction, let's assume that no finite subcover exists. Let $I_0$ be a closed
  inverval containing $K$, and bisect $I_0$ into two closed intervals $A_1$
  and $B_1$.}

\textit{(a) Why must either $A_1 \cap K$ or $B_1 \cap K$ (or both) have no
  finite subcover consisting of sets from
  $\{O_\lambda: \lambda \in \Lambda \}$ }

Suppose that both of $A_1 \cap K$ and $B_1 \cap K$ have finite subcover.
Then if we take a union of those subsovers it will cover whole $K$ and
we'll have a finite subcover for $K$, which is a contradiction.

\textit{(b) Show that there exists a nested sequence of closed intervals
  $I_0 \supseteq I_1 \supseteq I_2 ... $ with the property that, for each $n$,
  $I_n \cup K$ cannot be finitely covered and $\lim |I_n| = 0$.}

Let us have $I_n$ ($I_0$ for the base case) such that $I_n \cap K$ does not
contain finite subcovers. Divide this set into two equaly sized closed
intervals $A_n$ and $B_n$. Then at least one of $A_n \cap K$ and $B_n \cap K$
will not be finitely covered (because if both of them were finitely covered,
then $I_n$ would be finitely covered). Therefore set $I_{n + 1}$ to either
$A_n$ or $B_n$, whichever is not finitely covered by original set.
Because they are equally sized, the sizes of intervals are convergent to 0
(size of each of them is $2^-n$ times the size of $I_0$, and $I_0$ is a
closed interval (not closed set) and therefore is bounded, therefore has a
finite length).

\textit{(c) Show that there exists an $x \in K$ such that $x \in I_n$ for all
  $n$.}

Each $I_n \cap K$ is an intersection of two compact sets (closed interval and
a compact set), and therefore compact. Therefore we have a series of nested compacted sets, therefore its intersection is non-empty. Therefore there exists
$x \in K$ such that  $x \in I_n$  for all $n \in N$.

\textit{(d) Because $x \in K$, there must exist an open set $O_{\lambda_0}$
  from th original collection that contains $x$ as an element. Argue that
  there must be an $n_0$ large enough to guarantee  that
  $I_{n_0} \subseteq O_{\lambda_0}$. Explain why this furnished us with the
  desired contradiction.}

Because $O_{\lambda_0}$ is an open set and $x \in O_{\lambda_0}$, there exists
neighborhood $V_\epsilon(x)$ such that $V_\epsilon(x) \subseteq O_{\lambda_0}$.
Also, there exists $I_{n_0}$ with length $\epsilon / 2$ (because lengths of
$I_n$'s are convergent to 0). Thus,
$$ \forall q \in R:  -\epsilon / 2 \leq q - x \leq \epsilon \to
-\epsilon < q - x < \epsilon \to |q - x| < \epsilon$$
Therefore
$$I_{n_0} \subseteq V_\epsilon(x) \to I_{n_0} \subseteq O_{\lambda_0}$$
Therefore $I_{n_0}$ is finitely covered, which is a contradiction. Therefore
there does not exists an open cover for compact set, for which there is no
finite subcover, as desired.

\section*{3.3.9}
\textit{Consider each of the sets listed in Exercise 3.3.5. For each one that
  is not compact, find an open cover for which there is no finite subcover.}

For 
$$Q$$
it is $(-n, n)$

For
$$Q \cup [0,1]$$
it is $\{(-1, 0.7) \cup (0.8, 2), (-1, 0.707) \cup (0.708, 2), (-1, 0.7071) \cup (0.7072, 2), ...\}$ where boundaries of corresponding intervals converge to
$\sqrt{2}/2$.

For
$$R$$
it is $(-n, n)$

For
$$\{1, 1/2, 1/3, 1/4, 1/5\}$$
it is $(1/n, 2)$.

\section*{3.3.10}
\textit{Let's call a set clompact if it has the property that every closed
  cover (i.e., a cover consisting of closed sets) admits a finite subcover.
  Describe all of the clompact subsets of $R$.}

First of all, no open set can be a clompact set, because for any number
in the open set there
exists a neighborhood, and we add to a collection of sets a collection
$[\epsilon - 1/n + x, x + \epsilon + 1/n]$, that will prevent us from
creating a finite subcover.

Same applies to any set, that has an interval in it.

Finite sets are clompact (empty set included).

Cantor set is not clompact
($\{[0, 0], [0, 1 - 1/n], 1 \}$ will prevent us from constructing a finite
subcover.)

Any compact set cannot be a clompact.

Basically, any isolated point is a closed set in and of itself, therefore
infinite sets cannot be clompact.

Therefore the only clompact sets are the finite ones.

If a set is finite, then it'll certainly have in its clompact cover a set, where
each one of the points are located, therefore finite sets are clompact.

Therefore set is clompact if and only if it is finite.
    

\end{document}
