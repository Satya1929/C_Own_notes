def alpha_garland(S):
    garland = ""
    prev_alphabets = ""
    for i in S:
        if i.isalpha():
            garland += i
            prev_alphabets += i
        elif i.isdigit():
            garland += prev_alphabets[::-1] + prev_alphabets
    return garland

S = "ab3c1"
print(alpha_garland(S))