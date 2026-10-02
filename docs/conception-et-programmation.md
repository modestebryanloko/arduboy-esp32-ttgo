# Conception et programmation

## 1. Prototypage

Le concept de console est d'abord vérifié sur une maquette afin de tester les fonctions principales et d'identifier les problèmes matériels ou logiciels.

## 2. PCB avec KiCad

Le circuit électronique est conçu dans KiCad avant la fabrication. Cette étape permet d'organiser les composants et les connexions de la console.

## 3. Assemblage

Les composants sont soudés sur le PCB. Le montage comprend notamment le module ESP32 TTGO T-Display, les boutons, le buzzer et l'alimentation.

## 4. Programmation

Le programme doit gérer l'interface, les entrées utilisateur, l'affichage et la logique des jeux.

Une structure simplifiée peut être :

```cpp
void setup() {
    // Initialisation de l'écran
    // Initialisation des boutons
    // Initialisation du buzzer
    // Animation de démarrage
}

void loop() {
    // Lire les boutons
    // Mettre à jour le jeu
    // Actualiser l'affichage
    // Vérifier victoire / défaite
}
```

## 5. Gestion des états

Le programme peut utiliser plusieurs états :

```text
BOOT
  ↓
MENU
  ↓
GAME
  ├── GAME_WIN
  └── GAME_OVER
```

## 6. Corrections

Le projet a notamment nécessité des corrections liées à l'affichage et à la gestion de la mémoire EEPROM, ainsi que des améliorations de l'interface et de l'animation de démarrage.

## 7. Validation

La validation consiste à vérifier le fonctionnement des commandes, de l'affichage, des jeux et des éléments sonores sur le prototype.
