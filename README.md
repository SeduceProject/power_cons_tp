* Installation de l'environnement
```
apt install -y ocaml-nox openjdk-11-jdk vim
```

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

