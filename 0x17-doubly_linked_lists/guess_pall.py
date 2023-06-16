def is_pallindrome(string):
    if str(string) == str(string)[::-1]:
        return True
    else:
        return False


def productzz():
    m = 999
    n = 999
    largest_pal = 0
    while m > 99:
        n = 999
        while n > 99:
            product = m * n
            if product > largest_pal and is_pallindrome(product):
                largest_pal = product
            n -= 1
        m -= 1
    return largest_pal


n = productzz()
print("{}".format(n))
