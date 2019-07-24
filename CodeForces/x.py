
#def findCoin(mean, coins):
    

if __name__ == "__main__":
    tests = int(input())
    for i in range(tests):
        n = int(input())
        coins = input().split()
        mean = (sum(int(i) for i in coins)/n)
        if float(mean) > int(mean):
            print("Impossible")
    
        if coins.count(coins[0])==len(coins):
            print(1)
            break

        for i in coins:
            if int(i)==int(mean):
                print(int(mean))

