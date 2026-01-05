class Pair:
    def __init__(self, s, freq):
        self.s = s
        self.freq = freq

    # comparator for sorting
    def __lt__(self, other):
        # if frequencies are equal, compare lexicographically
        if self.freq == other.freq:
            return self.s < other.s
        # otherwise, higher frequency comes first
        return self.freq > other.freq

    def __repr__(self):
        return f"({self.s}, {self.freq})"


obj= Pair("a",1)
print(obj.s)
