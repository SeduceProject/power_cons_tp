### Installation de l'environnement
```
apt install -y ocaml-nox openjdk-11-jdk vim
```

### MonteCarlo
* Langage C
  * Compilation : `gcc montecarlo.c -o montecarlo -lm`
  * Execution : `time ./montecarlo 5000`
  * Temps d'execution (iterations / temps)
    * 5000000   / 1 s
    * 50000000  / 10 s
    * 500000000 / 100 s
  * Compilation avec optimisations : `gcc montecarlo.c -O3 -o montecarlo -lm`
  * Temps d'execution (iterations / temps)
    * 50000000  / 8 s
    * 500000000 / 73 s

* Java
  * Compilation : `javac MonteCarlo.java`
  * Execution : `time java MonteCarlo 5000`
  * Temps d'execution (iterations / temps)
    * 5000000   / 1 s
    * 50000000  / 9 s
    * 500000000 / 82 s

* Python
  * Execution : `time python3 montecarlo.py 5000`
  * Temps d'execution (iterations / temps)
    * 5000000   / 9 s
    * 50000000  / 90 s
    * 500000000 / N/A

* OCaml
  * Compilation : `ocamlc -o montecarlo montecarlo.ml`
  * Execution : ./montecarlo
  * Temps d'execution (iterations / temps)
    * 5000000   / 18 s
    * 50000000  / 188 s
    * 500000000 / N/A

### Tri d'un tableau d'entiers avec un tri a bulle
* Langage C
  * Compilation : `gcc tri_bulle.c -o tri_bulle`
  * Execution : `time ./tri_bulle 10000`
  * Temps d'execution (iterations / temps)
    * 10000  / 2 s
    * 20000  / 7 s
    * 50000  / 46 s
    * 50000  / 6 s avec l'optimisation -O3
* Java
  * Compilation : `javac TriBulle.java`
  * Execution : `time java TriBulle 10000`
  * Temps d'execution (iterations / temps)
    * 10000  / 1 s
    * 20000  / 3 s
    * 50000  / 15 s
  * Execution sans le JIT: `time java -Djava.compiler=NONE TriBulle 10000`
  * Temps d'execution (iterations / temps)
    * 10000  / 18 s

### Tri d'un tableau d'entiers avec un tri rapide
* Langage C
  * Compilation : `gcc tri_rapide.c -o tri_rapide`
  * Execution : `time ./tri_rapide 10000`
  * Temps d'execution (iterations / temps)
    * 25000  / 1 s
    * 500000  / 6 s
    * 1000000  / 23 s

### Hanoi
* Langage C
  * Compilation : `gcc hanoi.c -o hanoi`
  * Execution : `time ./hanoi 5`
  * Temps d'execution (iterations / temps)
    * 26  / 1 s
    * 28  / 5 s
    * 30  / 21 s
    * 30  / 7 s avec l'optimisation O3
* Java
  * Compilation : `javac Hanoi.java`
  * Execution : `time java Hanoi 5`
  * Temps d'execution (iterations / temps)
    * 26  / 1 s
    * 28  / 3 s
    * 30  / 12 s
* Python
  * Execution : `time python3 hanoi.py 5`
  * Temps d'execution (iterations / temps)
    * 20  / 1 s
    * 22  / 5 s
    * 25  / 43 s
* OCaml
  * Compilation : `time ocamlc -o hanoi hanoi.ml`
  * Execution : ./hanoi
  * Temps d'execution (iterations / temps)
    * 22   / 9 s
    * 24  / 6 s
    * 26 / 24 s
