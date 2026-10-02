/*
 * Arduboy maison - ESP32 TTGO T-Display
 * Exemple documentaire simplifié.
 *
 * Ce fichier illustre l'organisation générale du programme.
 * Il ne prétend pas reproduire le code original du projet.
 */

enum GameState {
  BOOT,
  MENU,
  GAME,
  GAME_WIN,
  GAME_OVER
};

GameState state = BOOT;

void setup() {
  // Initialisation de l'écran
  // Initialisation des boutons
  // Initialisation du buzzer

  state = MENU;
}

void loop() {
  switch (state) {

    case BOOT:
      // Animation de démarrage
      state = MENU;
      break;

    case MENU:
      // Afficher le menu
      // Lire le choix du joueur
      state = GAME;
      break;

    case GAME:
      // Lire les boutons
      // Mettre à jour la logique du jeu
      // Actualiser l'écran

      // Exemple :
      // if (playerWins) state = GAME_WIN;
      // if (playerLoses) state = GAME_OVER;
      break;

    case GAME_WIN:
      // Afficher l'écran de victoire
      break;

    case GAME_OVER:
      // Afficher l'écran de fin
      break;
  }
}
