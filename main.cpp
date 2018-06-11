#include<iostream>
#include<vector>

//Check if a letter is repeated
bool check_repetitions(std::vector<char> &vec){
    for(auto i=0; i<4; i++)
        for(auto j=i+1; j<4; j++){
            if(vec[i]==vec[j]){
                std::cout<< "Repetitions are not allowed bro!! -_-\n\n";
                vec.clear();
                return 1;
                break;
            }
        }
    return 0;
}

/* Check if more than 4 digits are inserted by the user
bool check_overflow(std::vector<char> &vec){
    if(vec.size()>4){
        std::cout<< "I said enter just FOUR digits! -_-\n\n";
        vec.clear();
        return 1;
    }
    return 0;
}
*/

int main()
{
    std::vector<char> vec1;
    std::vector<char> vec2;
    int bulls=0, cows=0;
    char x;

    //Accept the word to be guessed and make sure that no letter is repeated
    do{
        std::cout << "Enter a 4 digit number/word to be guessed:" << std::endl;
        for(auto i=0; i<4; i++){
            std::cin>>x;
            vec1.push_back(x);
        }
    }while(check_repetitions(vec1));

    //Accept the guesses, count bulls and cows and make sure that no letter is repeated
    do{
        bulls=0;
        cows=0;

        do{
            std::cout << "\nGuess the 4 digit number/word!" << std::endl;
            for(auto i=0; i<4; i++){
                std::cin>>x;
                vec2.push_back(x);
            }
        }while(check_repetitions(vec2));

        for(auto i=0; i<4; i++){
            for(auto j=0; j<4; j++){
                if(vec1[i]==vec2[j]){
                    if(i==j){
                        ++bulls;
                    }else{
                        ++cows;
                    }
                }
            }
        }

        std::cout << "| Cows: " << cows << " |\n| Bulls:" << bulls  <<" |\n";
        vec2.clear();
    }while(bulls!=4);

    std::cout << "You Guessed it right!!\n";
    return 0;
}
