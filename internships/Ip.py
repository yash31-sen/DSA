import ipaddress

def is_private_ip(ip):
    return ipaddress.ip_address(ip).is_private

def ip_to_binary(ip):
    return '.'.join(format(int(octet), '08b') for octet in ip.split('.'))

def ip_to_octal(ip):
    return '.'.join(format(int(octet), '04o') for octet in ip.split('.'))

def ip_to_decimal(ip):
    return ip  # Decimal is the standard representation

def ip_to_hexadecimal(ip):
    return '.'.join(format(int(octet), '02x') for octet in ip.split('.'))

# Take IP address input during runtime
ip = input("Enter an IP address: ")

# Check if the IP address is private or public
if is_private_ip(ip):
    print(f"The IP address {ip} is a private IP address.")
else:
    print(f"The IP address {ip} is a public IP address.")

# Convert IP address to different formats
binary_ip = ip_to_binary(ip)
octal_ip = ip_to_octal(ip)
decimal_ip = ip_to_decimal(ip)
hexadecimal_ip = ip_to_hexadecimal(ip)

# Print the converted IP addresses
print(f"Binary: {binary_ip}")
print(f"Octal: {octal_ip}")
print(f"Decimal: {decimal_ip}")
print(f"Hexadecimal: {hexadecimal_ip}")
