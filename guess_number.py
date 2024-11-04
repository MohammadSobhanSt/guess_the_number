import random

random_number = random.randint(1, 100)
attempts = 0

while True:
    user_guess = int(input("Guess a number between 1 and 100: "))
    print(random_number)
    if user_guess > random_number:
        print('Your number is higher than the random number...')
    elif user_guess < random_number:
        print('Your number is lower than the random number...')
    elif user_guess == random_number:
        print(f'Yay you guessed the number with {attempts} attempts :)')
        break
    else:
        print('There was a problem during the program... ')
        break
    attempts += 1