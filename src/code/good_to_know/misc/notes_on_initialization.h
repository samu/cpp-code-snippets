void notes_on_initialization() {
  int i = 5; // Auch Initialisierung          Copy-Initialization
             // 5.0 wäre hier OK, weil Compiler automatisch konvertiert
  int j{5};  // Initialisierung
             // 5.0 würde einen Fehler geben  Direct Initialization

  int a{0};
  int c = a; // Keine Zuweisung, sondern Copy-Initialisierung
             // Copy-Constructor

  int b{1};
  c = b;     // Zuweisung

  int d{};   // Default-Initialisierung
  d = a;     // Sinnvoll? Nein, weil unnötigerweise ein Objekt kreiert wird.
  int e{a};  // Besser

  int x = 3;
  x << 23;

  std::cout << "x: " << x << std::endl;
}