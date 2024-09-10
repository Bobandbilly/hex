def string_to_hex(s):
    # Convert the string to a hexadecimal representation
    hex_output = " ".join(f"{ord(c):02X}" for c in s)
    return hex_output

def main():
    # Get the input string from the user
    user_input = input("Enter a string: ")
    
    # Convert the string to hex
    hex_result = string_to_hex(user_input)
    
    # Output the hexadecimal representation
    print(f"The hexadecimal representation is: {hex_result}")

if __name__ == "__main__":
    main()
