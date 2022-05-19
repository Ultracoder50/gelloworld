# todo Print hello world
import time

print("jello world")
print("This is to Test python scripts")

def main():
    ye = 0
    time.sleep(1)
    i = 1
    ye = 0
    print("hello jello")
    time.sleep(1)
    while i < 2:
        temmy = input("me happ ar u happ")
        if temmy == "yes":
            print("yay now i super hap")
            i += 1
        if temmy == "yep":
            print("yay now i super hap")
            i += 1
        if temmy == "yeah":
            print("yay now i super hap")
            i += 1
        if temmy == "no":
            print("Awwww. Now me Sad.")
            time.sleep(1)
    time.sleep(1)
    yoooo = input("Do you like recursion?")
    if yoooo == "yes":
        ye += 1
        if ye == 1:
            print("cool")
        if ye >= 1:
            print("what just happened?")
        main()


main()
