# 🎮 Arduboy — Console de jeux maison avec ESP32 TTGO

## Présentation

Ce projet porte sur la conception et la réalisation d'une console de jeux faite maison, inspirée du concept **Arduboy**, à partir d'un module **ESP32 TTGO T-Display**.

Le projet comprend le prototypage électronique, la conception du PCB, l'assemblage des composants, la programmation des jeux et la documentation du prototype.

## 🎯 Objectifs

- Concevoir une console de jeux compacte.
- Prototyper et tester le circuit électronique.
- Concevoir le PCB sous KiCad.
- Programmer les jeux et l'interface.
- Gérer l'affichage et les boutons.
- Ajouter un buzzer pour les effets sonores.
- Tester et documenter le prototype.

## 🔧 Matériel

D'après le projet documenté :

- ESP32 TTGO T-Display
- Boutons SMD
- Buzzer
- Batterie
- Plaquette / PCB
- Composants électroniques nécessaires au montage

## 🛠️ Étapes du projet

### 1. Prototypage

Le premier objectif est de vérifier le fonctionnement du concept sur une maquette avant la réalisation finale.

### 2. Conception électronique

Le circuit est conçu puis préparé pour la fabrication du PCB avec **KiCad**.

### 3. Fabrication et soudure

Les composants sont assemblés sur le PCB, puis les connexions sont vérifiées.

### 4. Programmation

Le microcontrôleur est programmé pour gérer :

- l'affichage ;
- les boutons ;
- les menus ;
- les jeux ;
- les effets sonores ;
- les états de victoire et de défaite.

### 5. Tests et corrections

Les problèmes d'affichage et de gestion de mémoire sont identifiés puis corrigés avant la validation du prototype.

## 💻 Architecture simplifiée

```text
             ┌─────────────────────┐
             │   ESP32 TTGO        │
             │     T-Display       │
             └─────────┬───────────┘
                       │
          ┌────────────┼────────────┐
          ↓            ↓            ↓
      Affichage      Boutons      Buzzer
          │            │            │
          └────────────┼────────────┘
                       ↓
                 Jeu / Menu
                       ↓
                 GAME_WIN /
                 GAME_OVER
```

## 🧠 Exemple de logique

```text
Démarrage
   ↓
Animation de boot
   ↓
Menu principal
   ↓
Choisir un jeu
   ↓
Initialiser le jeu
   ↓
Lire les boutons
   ↓
Mettre à jour le jeu
   ↓
Afficher le résultat
   ↓
Victoire ? ── Oui → GAME_WIN
   │
   Non
   ↓
Continuer la partie
```

## 📊 Résultat du projet

Le travail documenté dans le mémoire mentionne un prototype fonctionnel avec **10 jeux**, ainsi qu'une documentation du projet.

## 🔮 Perspectives

- Ajouter de nouveaux jeux.
- Améliorer l'interface graphique.
- Ajouter des effets sonores plus avancés.
- Optimiser la gestion de la mémoire.
- Ajouter une sauvegarde des scores.
- Améliorer le boîtier et l'ergonomie.
- Produire une version PCB finalisée.

## 📁 Structure du dépôt

```text
arduboy-esp32-ttgo/
├── README.md
├── docs/
│   └── conception-et-programmation.md
├── images/
│   ├── pcb-arduboy.png
│   ├── interface.png
│   └── prototype-*.jpg
└── src/
    └── console_esp32.ino
```

## 👨‍💻 Auteur

**Modeste LOKO**
