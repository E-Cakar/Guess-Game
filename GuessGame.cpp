#include <iostream>
int input;
int max;
int whileCounter;
int guess;
int min;
int max1;
int counter;
int main(){
std::cout << "Lutfen Maksimum bir deger belirleyin ve bir sayi tutun, bu sayiyi tahmin etmeye calisacagim."<< std::endl;
std::cin >> max;
std::cout << "Maksimum degeriniz: "<< max <<"."<< std::endl;
guess = max/2;
max1 = max;
std::cout <<"Tahminim: " << guess <<"."<<"Eger tuttugunuz sayi tahmin ettigim sayidan; Daha buyukse 1, Daha kucukse 2, Eger dogru bildiysem 3 yazin. ";
while(whileCounter < 1){
    std::cin >> input;
    if (input == 1){
        counter ++;
        min = guess;
        guess = guess + ((max1-guess)/2);
        std::cout <<"Tahminim: " << guess <<"."<<"Eger tuttugunuz sayi tahmin ettigim sayidan; Daha buyukse 1, Daha kucukse 2, Eger dogru bildiysem 3 yazin. ";
    }
    if (input == 2){
        counter ++;
        max1 = guess;
        guess = min + ((guess-min)/2);
        std::cout <<"Tahminim: " << guess <<"."<<"Eger tuttugunuz sayi tahmin ettigim sayidan; Daha buyukse 1, Daha kucukse 2, Eger dogru bildiysem 3 yazin. ";
    }
    if (input == 3){
        std::cout << "Yeeey! "<< counter <<" Denemede bildim.";
        whileCounter += 5;
    }
}
}
