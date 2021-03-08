#Input Format

#The first line contains a string.
#The second line contains the width.

#Output Format

#Print the text wrapped paragraph.

def wrap(string, max_width):
    return "\n".join(textwrap.wrap(string,max_width))
    
if __name__ == '__main__':
    string, max_width = input(), int(input())
    result = wrap(string, max_width)
    print(result)