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

int main()
{
    std::vector<char> vec;
    char character1;
    char character2;
    int turn;
    int position;

    vec={'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    display_board(vec);

        std::cout << "\nChoose a character from O/X\n";
        std::cin >> character1;
        if(character1=='O' || character1=='o'){
            character2='X';
        }else{
            character2='O';
        }

            std::cout << "\nComputer marked position 5!\n";
            update_board(5, character2, vec);

            std::cout << "\nAt which position do you want to mark?\n";
            std::cin >> position;

            if(position==2 || position==4 || position==6 || position==8){
                update_board(position, character1, vec);

                std::cout << "\nComputer marked position 9!\n";
                update_board(9, character2, vec);


                std::cout << "\nAt which position do you want to mark?\n";
                std::cin >> position;
                update_board(position, character1, vec);

                if(position==1){
                    if(vec[1]!=2){
                        std::cout << "\nComputer marked position 3!\n";
                        update_board(3, character2, vec);

                        std::cout << "\nAt which position do you want to mark?\n";
                        std::cin >> position;
                        update_board(position, character1, vec);

                        if(position==6){
                            std::cout << "\nComputer marked position 7!\n";
                            update_board(7, character2, vec);
                            std::cout << "\nComputer wins!!\n";
                        }
                        else{
                            std::cout << "\nComputer marked position 6!\n";
                            update_board(6, character2, vec);
                            std::cout << "\nComputer wins!!\n";
                        }
                    }
                    else{
                        std::cout << "\nComputer marked position 7!\n";
                        update_board(7, character2, vec);

                        std::cout << "\nAt which position do you want to mark?\n";
                        std::cin >> position;
                        update_board(position, character1, vec);

                        if(position==3){
                            std::cout << "\nComputer marked position 8!\n";
                            update_board(8, character2, vec);
                            std::cout << "\nComputer wins!!\n";
                        }
                        else{
                            std::cout << "\nComputer marked position 3!\n";
                            update_board(3, character2, vec);
                            std::cout << "\nComputer wins!!\n";
                        }
                    }
                }
                else{
                    std::cout << "\nComputer marked position 1!\n";
                    update_board(1, character2, vec);
                    std::cout << "\nComputer wins!!\n";
                }
            }

            else if(position==1 || position==3 || position==7 || position==9){
                if(position==1){
                    update_board(position, character1, vec);

                    std::cout << "\nComputer marked position 9!\n";
                    update_board(9, character2, vec);

                    std::cout << "\nAt which position do you want to mark?\n";
                    std::cin >> position;
                    update_board(position, character1, vec);

                    if(position==2 || position==4 || position==6 || position==8){
                        if(position==4){
                            std::cout << "\nComputer marked position 7!\n";
                            update_board(7, character2, vec);

                            std::cout << "\nAt which position do you want to mark?\n";
                            std::cin >> position;
                            update_board(position, character1, vec);

                            if(position==3){
                                std::cout << "\nComputer marked position 8!\n";
                                update_board(8, character2, vec);
                                std::cout << "\nComputer wins!!\n";
                            }
                            else{
                                std::cout << "\nComputer marked position 3!\n";
                                update_board(3, character2, vec);
                                std::cout << "\nComputer wins!!\n";
                            }
                        }
                        else{
                            std::cout << "\nComputer marked position 3!\n";
                            update_board(3, character2, vec);

                            std::cout << "\nAt which position do you want to mark?\n";
                            std::cin >> position;
                            update_board(position, character1, vec);

                            if(position==7){
                                std::cout << "\nComputer marked position 6!\n";
                                update_board(6, character2, vec);
                                std::cout << "\nComputer wins!!\n";
                            }
                            else{
                                std::cout << "\nComputer marked position 7!\n";
                                update_board(7, character2, vec);
                                std::cout << "\nComputer wins!!\n";
                            }
                        }
                    }
                    else{
                        if(position==7){
                            std::cout << "\nComputer marked position 4!\n";
                            update_board(4, character2, vec);
                            std::cout << "\nDraw!!\n";
                        }
                        else{
                            std::cout << "\nComputer marked position 2!\n";
                            update_board(2, character2, vec);
                            std::cout << "\nDraw!!\n";
                        }
                    }
                }

                else if(position==3){
                    update_board(position, character1, vec);

                    std::cout << "\nComputer marked position 7!\n";
                    update_board(7, character2, vec);

                    std::cout << "\nAt which position do you want to mark?\n";
                    std::cin >> position;
                    update_board(position, character1, vec);

                    if(position==2 || position==4 || position==6 || position==8){
                        if(position==2){
                            std::cout << "\nComputer marked position 1!\n";
                            update_board(1, character2, vec);

                            std::cout << "\nAt which position do you want to mark?\n";
                            std::cin >> position;
                            update_board(position, character1, vec);

                            if(position==9){
                                std::cout << "\nComputer marked position 4!\n";
                                update_board(4, character2, vec);
                                std::cout << "\nComputer wins!!\n";
                            }
                            else{
                                std::cout << "\nComputer marked position 9!\n";
                                update_board(9, character2, vec);
                                std::cout << "\nComputer wins!!\n";
                            }
                        }
                        else{
                            std::cout << "\nComputer marked position 9!\n";
                            update_board(9, character2, vec);

                            std::cout << "\nAt which position do you want to mark?\n";
                            std::cin >> position;
                            update_board(position, character1, vec);

                            if(position==8){
                                std::cout << "\nComputer marked position 4!\n";
                                update_board(4, character2, vec);
                                std::cout << "\nComputer wins!!\n";
                            }
                            else{
                                std::cout << "\nComputer marked position 9!\n";
                                update_board(9, character2, vec);
                                std::cout << "\nComputer wins!!\n";
                            }
                        }
                    }
                    else{
                        if(position==1){
                            std::cout << "\nComputer marked position 2!\n";
                            update_board(2, character2, vec);
                            std::cout << "\nDraw!!\n";
                        }
                        else{
                            std::cout << "\nComputer marked position 6!\n";
                            update_board(6, character2, vec);
                            std::cout << "\nDraw!!\n";
                        }
                    }
                }

                else if(position==7){
                    update_board(position, character1, vec);

                    std::cout << "\nComputer marked position 3!\n";
                    update_board(3, character2, vec);

                    std::cout << "\nAt which position do you want to mark?\n";
                    std::cin >> position;
                    update_board(position, character1, vec);

                    if(position==2 || position==4 || position==6 || position==8){
                        if(position==8){
                            std::cout << "\nComputer marked position 9!\n";
                            update_board(9, character2, vec);

                            std::cout << "\nAt which position do you want to mark?\n";
                            std::cin >> position;
                            update_board(position, character1, vec);

                            if(position==1){
                                std::cout << "\nComputer marked position 6!\n";
                                update_board(6, character2, vec);
                                std::cout << "\nComputer wins!!\n";
                            }
                            else{
                                std::cout << "\nComputer marked position 1!\n";
                                update_board(1, character2, vec);
                                std::cout << "\nComputer wins!!\n";
                            }
                        }
                        else{
                            std::cout << "\nComputer marked position 1!\n";
                            update_board(1, character2, vec);

                            std::cout << "\nAt which position do you want to mark?\n";
                            std::cin >> position;
                            update_board(position, character1, vec);

                            if(position==2){
                                std::cout << "\nComputer marked position 9!\n";
                                update_board(9, character2, vec);
                                std::cout << "\nComputer wins!!\n";
                            }
                            else{
                                std::cout << "\nComputer marked position 2!\n";
                                update_board(2, character2, vec);
                                std::cout << "\nComputer wins!!\n";
                            }
                        }
                    }
                    else{
                        if(position==9){
                            std::cout << "\nComputer marked position 8!\n";
                            update_board(8, character2, vec);
                            std::cout << "\nDraw!!\n";
                        }
                        else{
                            std::cout << "\nComputer marked position 4!\n";
                            update_board(4, character2, vec);
                            std::cout << "\nDraw!!\n";
                        }
                    }
                }

                else{
                    update_board(position, character1, vec);

                    std::cout << "\nComputer marked position 1!\n";
                    update_board(1, character2, vec);

                    std::cout << "\nAt which position do you want to mark?\n";
                    std::cin >> position;
                    update_board(position, character1, vec);

                    if(position==2 || position==4 || position==6 || position==8){
                        if(position==7){
                            std::cout << "\nComputer marked position 6!\n";
                            update_board(6, character2, vec);

                            std::cout << "\nAt which position do you want to mark?\n";
                            std::cin >> position;
                            update_board(position, character1, vec);

                            if(position==3){
                                std::cout << "\nComputer marked position 4!\n";
                                update_board(4, character2, vec);
                                std::cout << "\nComputer wins!!\n";
                            }
                            else{
                                std::cout << "\nComputer marked position 3!\n";
                                update_board(3, character2, vec);
                                std::cout << "\nComputer wins!!\n";
                            }
                        }
                        else{
                            std::cout << "\nComputer marked position 3!\n";
                            update_board(3, character2, vec);

                            std::cout << "\nAt which position do you want to mark?\n";
                            std::cin >> position;
                            update_board(position, character1, vec);

                            if(position==2){
                                std::cout << "\nComputer marked position 4!\n";
                                update_board(4, character2, vec);
                                std::cout << "\nComputer wins!!\n";
                            }
                            else{
                                std::cout << "\nComputer marked position 2!\n";
                                update_board(2, character2, vec);
                                std::cout << "\nComputer wins!!\n";
                            }
                        }
                    }
                    else{
                        if(position==1){
                            std::cout << "\nComputer marked position 4!\n";
                            update_board(4, character2, vec);
                            std::cout << "\nDraw!!\n";
                        }
                        else{
                            std::cout << "\nComputer marked position 8!\n";
                            update_board(8, character2, vec);
                            std::cout << "\nDraw!!\n";
                        }
                    }
                }
            }
            else{
                std::cout << "\nPosition is already marked! ._.'\n";
            }
    return 0;
}
