def create_strings(inp: str):
    if len(inp) == 1:
        return [inp]
    res = set()
    for idx, head in enumerate(inp):
        tails = create_strings(inp[:idx] + inp[idx + 1 :])
        res |= {head + tail for tail in tails}
    return res


def main():
    inp = input()
    res = create_strings(inp)
    print(len(res))
    for s in sorted(res):
        print(s)


if __name__ == "__main__":
    main()
