/**
 * @name   Music Box
 * @course COMP 790
 * @lab    06
 * @author Aaron Smith
 * @date   10/22/2018
 */


// Define pins
#define PLAY_BUTTON    8
#define BUZZER         9


// Define tempo and beats
#define BEATS_PER_MINUTE  140
#define BEATS_PER_WHOLE   4

#define MS_PER_BEAT  60000L / BEATS_PER_MINUTE
#define WHOLE        MS_PER_BEAT * BEATS_PER_WHOLE
#define HALF         WHOLE / 2
#define QUARTER      WHOLE / 4
#define EIGHTH       WHOLE / 8


// Define notes
#define D4    293.665
#define E4    329.628
#define G4    391.995
#define A4    440.000
#define D5    587.330
#define F5    698.456
#define Fs5   739.989
#define G5    783.991


// Function declarations
void play_single_note(int pin, int frequency, int duration);
void play_sweet_child_o_mine_intro(int pin);


void setup() {
  // Set pin modes
  pinMode(PLAY_BUTTON, INPUT);
}


void loop() {
  // Check if the song should play
  bool should_play_song = digitalRead(PLAY_BUTTON);

  // Play the song
  if (should_play_song) {
    play_sweet_child_o_mine_intro(BUZZER);
  }
}


void play_single_note(int pin, int frequency, int duration) {
  tone(pin, frequency, duration);
  delay(duration);
}


void play_sweet_child_o_mine_intro(int pin) {
  for (int i = 0; i < 2; i++) {
    play_single_note(pin, D4,  EIGHTH);
    play_single_note(pin, D5,  EIGHTH);
    play_single_note(pin, A4,  EIGHTH);
    play_single_note(pin, G4,  EIGHTH);
    play_single_note(pin, G5,  EIGHTH);
    play_single_note(pin, A4,  EIGHTH);
    play_single_note(pin, Fs5, EIGHTH);
    play_single_note(pin, A4,  EIGHTH);
  }
  for (int i = 0; i < 2; i++) {
    play_single_note(pin, E4,  EIGHTH);
    play_single_note(pin, D5,  EIGHTH);
    play_single_note(pin, A4,  EIGHTH);
    play_single_note(pin, G4,  EIGHTH);
    play_single_note(pin, G5,  EIGHTH);
    play_single_note(pin, A4,  EIGHTH);
    play_single_note(pin, Fs5, EIGHTH);
    play_single_note(pin, A4,  EIGHTH);
  }
  for (int i = 0; i < 2; i++) {
    play_single_note(pin, G4,  EIGHTH);
    play_single_note(pin, D5,  EIGHTH);
    play_single_note(pin, A4,  EIGHTH);
    play_single_note(pin, G4,  EIGHTH);
    play_single_note(pin, G5,  EIGHTH);
    play_single_note(pin, A4,  EIGHTH);
    play_single_note(pin, Fs5, EIGHTH);
    play_single_note(pin, A4,  EIGHTH);
  }
  for (int i = 0; i < 2; i++) {
    play_single_note(pin, D4,  EIGHTH);
    play_single_note(pin, D5,  EIGHTH);
    play_single_note(pin, A4,  EIGHTH);
    play_single_note(pin, G4,  EIGHTH);
    play_single_note(pin, G5,  EIGHTH);
    play_single_note(pin, A4,  EIGHTH);
    play_single_note(pin, Fs5, EIGHTH);
    play_single_note(pin, A4,  EIGHTH);
  }
}
