<h1>Zadania maturalne 2022(programowanie)</h1>

<h2>Zadanie 4. Liczby</h2>
W pliku liczby.txt danych jest 200 różnych liczb całkowitych z zakresu [10, 100000]. Każda z tych liczb zapisana jest w osobnym wierszu.
<br><br>
<b>Napisz program</b> (lub kilka programów), który(-e) znajdzie(-dą) odpowiedzi do poniższych
zadań. Odpowiedzi zapisz w pliku <i>wyniki4.txt</i>. Każdą odpowiedź poprzedź numerem oznaczającym zadanie.
<br><br>
Do dyspozycji masz plik <i>przyklad.txt</i>, który także zawiera 200 liczb – odpowiedzi dla tego pliku podano w treściach zadań. Możesz sprawdzać na nim działanie swojego programu.
<br><br>
<b>Uwaga:</b> Pamiętaj, że Twój program musi ostatecznie działać dla pliku <i>liczby.txt</i>.

<h4>Zadanie 4.1. (0–4)</h4>
Podaj, ile jest w pliku <i>liczby.txt</i> takich liczb, których cyfry pierwsza i ostatnia są takie same. Zapisz tę z nich, która występuje w pliku <i>liczby.txt</i> jako pierwsza.<br>
W pliku z danymi jest co najmniej jedna taka liczba.
<br><br>
Odpowiedź dla danych z pliku <i>przyklad.txt</i>: 26 626
(26 takich liczb, które mają pierwszą i ostatnią cyfrę taką samą; pierwszą z nich w pliku
przykładowym jest 626)
<br>
<h4>Zadanie 4.2. (0–4)</h4>
Znajdź w pliku <i>liczby.txt</i>:
<ul>
<li> liczbę, która ma w rozkładzie najwięcej czynników pierwszych (podaj tę liczbę oraz liczbę jej czynników pierwszych)</li>
<li> liczbę, która ma w rozkładzie najwięcej <u>różnych</u> czynników pierwszych (podaj tę liczbę oraz liczbę jej <u>różnych</u> czynników pierwszych).</li>
</ul>
<br>
<b>Przykład:</b> liczba 420=2·2·3·5·7 ma w rozkładzie 5 czynników pierwszych, w tym 4 różne czynniki pierwsze (2, 3, 5, 7).
<br><br>
Odpowiedź dla danych z pliku <i>przyklad.txt</i>: 144 6 210 4
(Liczba 144 ma najwięcej czynników pierwszych; liczba czynników pierwszych liczby 144 wynosi 6. Liczba 210 ma najwięcej <u>różnych</u> czynników pierwszych; liczba <u>różnych</u> czynników pierwszych liczby 210 wynosi 4).
<br>
<h4>Zadanie 4.3. (0–4)</h4>
Trójka (x, y, z) jest dobra, jeśli y jest wielokrotnością x, natomiast z jest wielokrotnością y (czyli x dzieli y, a y dzieli z) oraz x, y, z są różne.
<br><br>
<b>Przykład:</b> trójka (2, 6, 12) jest dobra, ponieważ 2 dzieli 6, a 6 dzieli 12. Trójka (2, 10, 12) nie jest dobra, ponieważ 10 nie dzieli 12.
<br><br>
Analogicznie możemy zdefiniować dobrą piątkę liczb – piątka (u, w, x, y, z) jest dobra, jeśli każda z liczb, poza pierwszą, jest podzielna przez poprzednią liczbę z piątki (u dzieli w, w dzieli x, x dzieli y oraz y dzieli z) oraz wszystkie liczby z piątki są różne.
<br><br>
a) Podaj, ile jest dobrych trójek wśród liczb występujących w pliku <i>liczby.txt</i>. Zapisz wszystkie dobre trójki do pliku <i>trojki.txt</i>, każdą w osobnym wierszu.
<br><br>
<b>Uwaga:</b> Liczby z trójki nie muszą występować w pliku <i>liczby.txt</i> w kolejnych
wierszach, a ich kolejność w tym pliku może być dowolna.

b) Podaj, ile jest dobrych piątek wśród liczb występujących w pliku <i>liczby.txt</i>.


Odpowiedzi dla danych z pliku <i>przyklad.txt</i>:<br>
a) 10<br>
b) 1 <br>
(10 dobrych trójek i jedna dobra piątka)

Zawartość pliku <i>trojki.txt</i> dla danych z pliku <i>przyklad.txt</i>:
<br>13 104 208
<br>13 52 104
<br>13 52 208
<br>13 26 104
<br>13 26 52
<br>13 26 208
<br>52 104 208
<br>26 104 208
<br>26 52 104
<br>26 52 208