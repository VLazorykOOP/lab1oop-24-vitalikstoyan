#include <iostream>
#include <vector>

int main() {
    int N;                  //завдання 1 15 варіант  Стоян Віталій Віталійович 141А(2)
    
    //  вводимо  розмір масиву
    std::cout << "vestu rozmir massivu : ";
    std::cin >> N;


    // оголошуємо вектор та заповнюємо його числами
    std::vector<int> A(N);
    std::cout << "vvestu chuslo massivu:" << std::endl;
    for (int i = 0; i < N; ++i) {
        std::cout << "chuslo " << i + 1 << ": ";
        std::cin >> A[i];
    }

    // вилучаємо додатні елементи
    int newindex = 0;
    for (int i = 0; i < N; ++i) {
        if (A[i] <= 0) {
            if (newindex != i) {
                A[newindex] = A[i];
            }
            ++newindex;
        }
    }

    // виводимо результат
    std::cout << "mmasive pisla dodatnux:" << std::endl;
    for (int i = 0; i < newindex; ++i) {
        std::cout << A[i] << " ";
    }

    return 0;
}

//завдання 2

#include <iostream>

int main() {
    int N;
    //вводимо розмір масиву 
    std::count << "vvodumo rozmir massivu: ";
    std::cin >> N;
    //перевіряємо на правильність розміру
    if (N <= 0) {
        std::count << "eroor" << std::endl;
        return 1;
    }
    int A[N];
    //оголошуємо масив та заповнюємо його
    std::count << "vodumo masive:" << std::endl;
    for (int i = 0; i < N; ++i) {
        std::cout << "chuslo" << i + 1 << ": ";
        std::cin >> A[i];
    }
    int 1kratnogo2 = -1;
    for (int i = 0; i < N; ++i) {
        if (A[i] % 2 == 0) {
            1kratnogo2 = i;
            break;
        }
    }

     //якщо немає кратньому двом. або вони в останьому елементі то 
    if (1kratnogo2 == -1 || 1kratnogo2 == N - 1) {
        std::count << "nemaye takux elementiv " << std::endl;
        return 0;
    }
       //тоді знайдемо мінімальне значення додатніх елементів  розташованих правіше першого елементу кратному 2
    int minznachenya = A[1kratnogo2 + 1];

    for (int i = 1kratnogo2 + 2; i < N; i++) {
        if (A[i] > 0 && A[i] < minznachenya) {
            minznachenya = A[i];
        }
     }
    if (minznachenya == A[1kratnogo2 + 1]) {
        std::count << "nemaye dodatnix chusel rozstashovanux pravise pershogo elementy kratnogo 2" << std::endl;
    }
    else {
        std::count << "min shacenya dodatnix elementiv rozctashovanux pravice pravogo elementy kratnogo 2" << minznachenya << std::endl;
    }

    return 0;

}
