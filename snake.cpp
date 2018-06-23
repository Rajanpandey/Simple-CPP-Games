#include<iostream>
#include<string>
#include<vector>

void display_board(std::vector<char> &vec){
    std::cout << "\n   " << vec[0] << " | " << vec[1] << " | " << vec[2] << " \n";
    std::cout << "  -----------\n";
    std::cout << "\n   " << vec[3] << " | " << vec[4] << " | " << vec[5] << " \n";
    std::cout << "  -----------\n";
    std::cout << "\n   " << vec[6] << " | " << vec[7] << " | " << vec[8] << " \n";
}

void update_board(int position, char character, std::vector<char> &vec){
    vec[position-1]=character;
    display_board(vec);
}

int main()
{
    std::vector<char> vec;
    char character;
    int position;

    vec={'1', '2', '3', '4', '5', '6', '7', '8', '9'};

    display_board(vec);

    std::cout << "\nChoose a character from O/X\n";
    std::cin >> character;

    do{
        std::cout << "\nAt which position do you want to mark?\n";
        std::cin >> position;

        switch(position){
        case 1:
            update_board(position, character, vec);
            break;

        case 2:
            update_board(position, character, vec);
            break;

        case 3:
            update_board(position, character, vec);
            break;

        case 4:
            update_board(position, character, vec);
            break;

        case 5:
            update_board(position, character, vec);
            break;

        case 6:
            update_board(position, character, vec);
            break;

        case 7:
            update_board(position, character, vec);
            break;

        case 8:
            update_board(position, character, vec);
            break;

        case 9:
            update_board(position, character, vec);
            break;

        default:
            std::cout << "\nThat position is not an option! -_-'\n";
            break;
        }
    }while(true);



    return 0;
}
