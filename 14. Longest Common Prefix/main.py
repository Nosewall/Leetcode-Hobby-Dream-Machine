# This is a sample Python script.

# Press Shift+F10 to execute it or replace it with your code.
# Press Double Shift to search everywhere for classes, files, tool windows, actions, and settings.


def print_hi(arr):
    sol = ""
    minimum_length = min([len(i) for i in arr])

    for letter in range(minimum_length):
        character_to_check = arr[0][letter]
        for w in arr[1:]:
            if character_to_check != w[letter]:
                return sol
        sol += character_to_check

    return sol






# Press the green button in the gutter to run the script.
if __name__ == '__main__':
    print_hi('PyCharm')

# See PyCharm help at https://www.jetbrains.com/help/pycharm/
