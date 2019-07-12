char planets[][8] = {
  "Mercury",
  "Venus",
  "Earth",
  "Mars",
  "Jupiter",
  "Saturn",
  "Uranus",
  "Neptune",
  "Pluto"
};


char *planets[] = {
  "Mercury",
  "Venus",
  "Earth",
  "Mars",
  "Jupiter",
  "Saturn",
  "Uranus",
  "Neptune",
  "Pluto"
};

for (i = 0; i < 9; i++){
  if(planets[i][0] == 'M'){
    printf("%s begins with M\n", planets[i]);
  }
}
