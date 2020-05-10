Recruitment task

Obiekt w grze może posiadać kilka "deformacji", których można użyć do
odkształcenia jego oryginalnej geometrii. Siła odkształcenia kontrolowana jest za
pomocą wagi, gdzie 0.0 to brak odkształcenia, a 1.0 to maksymalne odkształcenie.
Wagi są animowane co umożliwia uzyskanie płynnych w czasie odkształceń obiektu.
Obiekt może być jednocześnie odkształcony więcej niż jedną "deformacją", ale silnik
renderujący jest w stanie zaaplikować tylko 4 jednocześnie w trakcie klatki. Dlatego
należy wybrać te "deformacje", które w danej chwili mają największy wpływ na kształt
geometrii. Zaimplementuj funkcję pickMorphs.

Interfejs funkcji: std::array<int, 4> pickMorphs(const std::vector<float>& weights);

gdzie: weights - tablica której indeksy to identyfikatory "deformacji", a wartości
reprezentują aktualne w danej klatce wagi.
wartość zwracana: indeksy czterech "deformacji" z największymi wartościami wag.
Jeśli deformacji było mniej niż 4 należy zwrócić w tablicy -1. Kolejność indeksów
dowolna.

Uwagi:

Funkcja będzie wywoływana wielokrotnie w każdej klatce.
Wektor wejściowy to w skrajnych przypadkach około 100 wag.
Zabronione jest alokowanie pamięci na stercie.
