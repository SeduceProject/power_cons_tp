* Installation de l'environnement
```
apt install -y ocaml-nox openjdk-11-jdk vim
```

### MonteCarlo
* Langage C
  * Compilation : `gcc montecarlo.c -o montecarlo -lm`
  * Exécution : `time ./montecarlo 5000`
  * Temps d'exécution (itérations / temps)
    * 5000000   / 1 s
    * 50000000  / 10 s
    * 500000000 / 100 s

* Java
  * Compilation : `javac MonteCarlo.java`
  * Exécution : `time java MonteCarlo 5000`
  * Temps d'exécution (itérations / temps)
    * 5000000   / 1 s
    * 50000000  / 9 s
    * 500000000 / 82 s

* Python
  * Exécution : `time python3 montecarlo.py 5000`
  * Temps d'exécution (itérations / temps)
    * 5000000   / 9 s
    * 50000000  / 90 s

* OCaml
  * Compilation : `time ocamlc -o montecarlo montecarlo.ml`
  * Exécution : ./montecarlo
  * Temps d'exécution (itérations / temps)
    * 5000000   / 9 s
    * 50000000  / 90 s

### Tri d'un tableau d'entiers avec un tri à bulle
* Langage C
  * Compilation : `gcc tri_bulle.c -o tri_bulle`
  * Exécution : `time ./tri_bulle 10000`
  * Temps d'exécution (itérations / temps)
    * 10000  / 1 s
    * 20000  / 5 s
    * 50000  / 33 s
* Java
  * Compilation : `javac TriBulle.java`
  * Exécution : `time java TriBulle 10000`
  * Temps d'exécution (itérations / temps)
    * 10000  / 1 s
    * 20000  / 3 s
    * 50000  / 13 s
  * Exécution sans le JIT: `time java -Djava.compiler=NONE TriBulle 10000`
  * Temps d'exécution (itérations / temps)
    * 10000  / 18 s

### Tri d'un tableau d'entiers avec un tri rapide
* Langage C
  * Compilation : `gcc tri_rapide.c -o tri_rapide`
  * Exécution : `time ./tri_rapide 10000`
  * Temps d'exécution (itérations / temps)
    * 25000  / 1 s
    * 500000  / 6 s
    * 1000000  / 23 s

