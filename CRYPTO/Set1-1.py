print "Enter hexadecimal string."

string = raw_input("> ");
if "0x" in string :
    string = string[2:]
print string.decode('hex').encode('base64')
