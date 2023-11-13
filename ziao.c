def sum_of_even_numbers(arr):
    even_sum = 0
    for num in arr:
        if num % 2 == 0:
            even_sum += num
    return even_sum

numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
result = sum_of_even_numbers(numbers)
print("Sum of even numbers:", result)
