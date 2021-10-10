# Algorithmes de tri

*Auteurs : Lucas Migliarini et Julien Peyrol*

Le but de ce projet est d'implémenter 4 algorithmes de tri (tri à bulle, tri par insertion, tri par selection, tri par tas). Une moyenne de temps pour effectuer ces tris sera exporté au format csv.

## Commande `make documentation`

Le code est annoté et documenté grâce à Doxygen. On peut taper la commande qui permet de générer la documentation. Les paramètre de cette documentation sont dans le *Makefile* et le *Doxyfile*. La documenation se trouve dans le dossier /html et le fichier *index.html*.

```bash
make documentation
```
## Résultat attendus 

Un fichier csv sera crée après le lancement. Il aura trois colomnes: la première sera l'algorithme utilisé, la seconde sera la taille du tableau et la troisième le temps moyen pris pour trier le tableau. 
