/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manvel <manvel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 19:28:21 by mansargs          #+#    #+#             */
/*   Updated: 2025/01/14 20:08:58 by manvel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t n)
{
	const unsigned char	*buffer;
	unsigned char		c;

	c = (unsigned char)value;
	buffer = (const unsigned char *)ptr;
	if (ptr == NULL || n == 0)
		return (NULL);
	if (c == '\0')
		return ((void *)buffer + ft_strlen((const char *)ptr));
	while (n--)
	{
		if (*buffer == c)
			return ((void *)buffer);
		buffer++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

void	test_memchr(const void *s, int c, size_t n) {
	// Call original memchr
	void *original = memchr(s, c, n);
	// Call your ft_memchr
	const void *custom = ft_memchr(s, c, n);

	printf("Testing with: String: \"%s\", Char: '%c', Length: %zu\n", (char *)s,
		c, n);
	if (original == custom) {
		printf("✅ Success: Both return (%p\n", original));
	} else {
		printf("❌ Failure:\n");
		printf("   Original memchr: %p\n", original);
		printf("   ft_memchr:       %p\n", custom);
	}
	printf("\n");
}

int	main(void) {
	const char str[] = "Hello, world!";
	const char empty_str[] = "";

	// Test cases
	test_memchr(str, 'o', strlen(str));          // Normal case, character found
	test_memchr(str, 'z', strlen(str));          // Normal case,
		character not found
	test_memchr(str, ',', strlen(str));          // Character at the middle
	test_memchr(str, 'H', 1);                    // Character at the start
	test_memchr(str, '!', strlen(str));          // Character at the end
	test_memchr(str, 'o', 0);                    // Length is zero
	test_memchr(str, 'o', 5);                   
		// Length less than total string length
	test_memchr(empty_str, 'x', 10);             // Empty string
	test_memchr(str, '\0', strlen(str) + 1);     // Null character search
	test_memchr(str, 256 + 'o', strlen(str));    // Large int value (casting)

	return (0);
}
*/