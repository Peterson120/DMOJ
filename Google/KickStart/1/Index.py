def h_index(n, citations):
    ans = []
    pop = []

    for i in range(1, n+1):
        for k in citations:
            if citations[int(k)] < i:
                citations.remove(k)

        if len(citations) >= i:
            ans.append(i)
        else:
            ans.append(len(citations))

    return ans


if __name__ == '__main__':
    t = int(input())

    for test_case in range(1, t + 1):
        n = int(input())  # The number of papers
        citations = input().split()  # The number of citations for each paper
        h_index_scores = h_index(n, citations)
        print("Case #" + str(test_case) + ": " + ' '.join(map(str, h_index_scores)))
