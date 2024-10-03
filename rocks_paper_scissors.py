import random


# possible states for the game
states = ['rock', 'paper', 'scissors']
game_endings = {"tie": 0, "user_win": 0, "user_loose": 0}
match_count = 1  


# providing user with instructions
def print_instructions():
    print("Key choices:")
    print("1 for Rock")
    print("2 for Paper")
    print("3 for Scissors")


# validating input
def is_input_valid(user_choice):
    return 1 <= user_choice <= 3


# for invalid input
def display_error():
    print("Enter valid key")
    print("\n" * 3)


# user and computer choices    
def display_choices(u_choice, c_choice):
    print(f"\nYour Choice: {states[u_choice - 1]}")    
    print(f"Computer Choice: {states[c_choice - 1]}")


# main game logic
def find_match_winner(u_choice, c_choice):
    
    if u_choice == c_choice:
        print(f"Match {match_count} Tied")
        game_endings["tie"] += 1
        
    elif (u_choice - c_choice) % 3 == 1:
        print(f"You Win Match: {match_count}")
        game_endings["user_win"] += 1
        
    else:
        print(f"Computer Wins Match: {match_count}")
        game_endings["user_loose"] += 1


# updating the user of the score      
def update_score():
    print(f"Current State: W = {game_endings['user_win']}, L = {game_endings['user_loose']}, T = {game_endings['tie']}")
    print("\n" * 2)


# checking if the game ends
def game_ends():
    if game_endings["user_win"] == 3:
        print("You Win the Entire GAME")
        print("Congratulations")
        return True
    elif game_endings["user_loose"] == 3:
        print("Computer Wins the Entire GAME")
        print("Womp Womp")
        return True
    else:
        return False


def main():
    # declare match_count as global to modify it in the loop
    global match_count  
    print("\n\n\n         WELCOME TO ROCK, PAPER, SCISSORS")
    print("\n" * 3)
    print("First to 3 Wins!")

    # run until there is a definite winner
    while True:
        print(f"Match No: {match_count}")

        # instructions
        print_instructions()

        # get user choice
        try:
            user_choice = int(input())
        except ValueError:
            display_error()
            continue

        if is_input_valid(user_choice) == False:
            display_error()
            continue

        # displaying choices
        computer_choice = random.randint(1, 3)
        display_choices(user_choice, computer_choice)

        # game logic
        find_match_winner(user_choice, computer_choice)

        # update score
        update_score()

        # checking to end the loop
        if game_ends():
            break

        # increment match count after each round
        match_count += 1  

# calling the main function
main()
