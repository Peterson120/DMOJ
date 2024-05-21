# TODO: Complete the get_ruler function
def get_ruler(kingdom):
    ruler = ''
    vowels = ['A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u']
    if kingdom[-1] == 'y' or kingdom[-1] == 'Y':
        ruler = "nobody"
    elif kingdom[-1] in vowels:
        ruler = "Alice"
    else:
        ruler = "Bob"
    # It should be either 'Alice', 'Bob' or 'nobody'.
    return ruler


def main():
    # Get the number of test cases
    t = int(input())
    for t in range(t):
        # Get the kingdom
        kingdom = input()
        print('Case #%d: %s is ruled by %s.' % (t + 1, kingdom, get_ruler(kingdom)))


if __name__ == '__main__':
    main()
