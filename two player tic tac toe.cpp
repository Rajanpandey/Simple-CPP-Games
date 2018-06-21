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
    char pos=48+position;
    if(vec[position-1]!=pos){
        std::cout << "\nPosition is already marked! ._.'\n";
        std::cin >> position;
        update_board(position, character, vec);
        return;
    }
    vec[position-1]=character;
    display_board(vec);
}

bool check_end(std::vector<char> &vec){
    auto count=0;
    char x=48;

    for(auto i=0; i<9; i++){
        if(vec[i]==++x){
            count++;
        }
    }
    x=48;

    if(count==0){
        std::cout << "\nIt's a draw! ._.'";
        return 0;
    }else{
        count=0;
        return 1;
    }
}

bool game_over(std::vector<char> &vec, int player_turn){
    if(vec[0]==vec[1] && vec[1]==vec[2] || vec[3]==vec[4] && vec[4]==vec[5] || vec[6]==vec[7] && vec[7]==vec[8] ||
       vec[0]==vec[3] && vec[3]==vec[6] || vec[1]==vec[4] && vec[4]==vec[7] || vec[2]==vec[5] && vec[5]==vec[8] ||
       vec[0]==vec[4] && vec[4]==vec[8] || vec[2]==vec[4] && vec[4]==vec[6]){
        if((player_turn-1)%2==0){
            std::cout << "\nPlayer 1 wins!!!";
        }else{
            std::cout << "\nPlayer 2 wins!!!";
        }
        return 0;
    }
    else if(true){
        return check_end(vec);
    }
    else{
        return 1;
    }
}

int main()
{
    std::vector<char> vec;
    char character;
    int position;
    auto player_turn=0;

    vec={'1', '2', '3', '4', '5', '6', '7', '8', '9'};

    display_board(vec);

    while(game_over(vec, player_turn)){
        if(player_turn%2==0){
            std::cout << "\nPlayer 1's turn\n";
            character='O';

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
        }

        else{
            std::cout << "\nPlayer 2's turn\n";
            character='X';

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
        }
        player_turn++;
    }
    return 0;
}
