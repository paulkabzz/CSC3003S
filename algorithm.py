class Algorithm:
    def __init__(self):
        pass

    def indexOfFirstOccurance(self, t: str, s: str):
        return t.index(s)


algorithm = Algorithm()

print(algorithm.indexOfFirstOccurance("aaaaabaababab", "bab"))