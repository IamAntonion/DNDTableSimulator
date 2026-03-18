# api.py
import requests
import sys

def main() -> None:
    length : int = len(sys.argv)

    if length < 2:
        print("NULL Arg")
        sys.exit(1)

    arg : str = sys.argv[1]

    response = requests.get(arg)

    print(response.json())

if __name__ == "__main__":
    main()