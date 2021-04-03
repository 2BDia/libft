/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 10:45:29 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/04/02 15:20:41 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "libft.h"

int main(void)
{
    //memset
    // char str[] = "Hello bonjour je suis une phrase de test";
    //
    // ft_memset(str + 10, '/', 9);
    // printf("%s\n", str);

    //bzero
    // char str[] = "Hello bonjour je suis une phrase de test";
    //
    // ft_bzero(str + 3, 5);
    // printf("%s\n", str);
    // printf("%c\n", *(str + 7));
    // printf("%c\n", *(str + 8));

    //memcpy
    // char src[] = "Hello";
    // char dest[5];
    
    // ft_memcpy(dest, src, 3);
    // printf("%s\n", dest);

    //memccpy !!
    // char src[] = "Helow";
    // char dest1[6];
    // char *str1;
	// char dest2[6];
	// char *str2;

    // str1 = memccpy(dest1, src, 'o', 3);
    // printf("%s\n", dest1);
    // printf("%c\n", *(str1 - 1));

	// str2 = ft_memccpy(dest2, src, 'o', 3);
	// printf("%s\n", dest2);
    // printf("%c\n", *(str2 - 1));

    //memmove !!
    // char src[] = "Hello";
    // char dest[5];
    
    // memcpy(src + 1, src, 5);
    // printf("%s\n", src);

    //memchr

    //memcmp

    //strlen
    // char str[] = "Salut";

    // printf("%zu", ft_strlen(str));

    //strdup
    // char str[] = "Ca commence à faire beaucoup j'ai plus d'inspi";
    // char *dest;

    // dest = ft_strdup(str);
    // printf("%s", dest);
    // free(dest);

    //strcpy
    // char src[] = "Hola";
    // char dest[] = "Hello";

    // ft_strcpy(dest, src);
    // printf("%s", dest);

    //strncpy
    // char src[] = "Hola";
    // char dest[] = "Bonjour";

    // printf("%s\n", ft_strncpy(dest, src, 0));
    // printf("%s\n", ft_strncpy(dest, src, 3));
    // printf("%s\n", ft_strncpy(dest, src, 5));

    //strcat
    // char src[] = " a tous!";
    // char dest[] = "Bonjour";

    // printf("%s\n", ft_strcat(dest, src));
    // printf("%s\n", strcat(dest, src));

    //strncat
    // char src[] = " a tous!";
    // char dest[] = "Bonjour";

    // printf("%s\n", ft_strncat(dest, src, 5));
    // printf("%s\n", strncat(dest, src, 5));

    //strchr
    // char str[] = "Trouve un z dans cette chaine!";

    // printf("%s\n", ft_strchr(str, 'z'));
    // printf("%s\n", strchr(str, 'z'));

    //strrchr
    // char str[] = "Trouve un z dans cette chaine!";

    // printf("%s\n", ft_strrchr(str, 'z'));
    // printf("%s\n", strrchr(str, 'z'));

    //strstr
    // char str1[] = "this is javatpoint with c and java";

    // printf("%s\n", strstr(str1, "java"));
    // printf("%s\n", ft_strstr(str1, "java"));

    //strnstr
    // char str2[] = "this is javatpoint with c and java";

    // printf("%s\n", strnstr(str2, "is", 3));
    // printf("%s\n", ft_strnstr(str2, "is", 3));
    // printf("%s\n", strnstr(str2, "is", 4));
    // printf("%s\n", ft_strnstr(str2, "is", 4));

    //strcmp
    // char str1[] = "pare!l";
    // char str2[] = "pare!l";

    // printf("%d\n", strcmp(str1, str2));
	// printf("%d\n", ft_strcmp(str1, str2));

    // char str3[] = "different";
    // char str4[] = "d1fferent";

	// printf("%d\n", strcmp(str3, str4));
	// printf("%d\n", ft_strcmp(str3, str4));

	//strncmp
	// char str1[] = "pare!l";
    // char str2[] = "pare!l";

    // printf("%d\n", strncmp(str1, str2, 7));
	// printf("%d\n", ft_strncmp(str1, str2, 7));

    // char str3[] = "different";
    // char str4[] = "d1fferent";

	// printf("%d\n", strncmp(str3, str4, 8));
	// printf("%d\n", ft_strncmp(str3, str4, 8));

    // char str5[] = "hello";
    // char str6[] = "henlo";

	// printf("%d\n", strncmp(str5, str6, 5));
	// printf("%d\n", ft_strncmp(str5, str6, 5));
	// printf("%d\n", strncmp(str5, str6, 2));
	// printf("%d\n", ft_strncmp(str5, str6, 2));

	//atoi
	// char nb[] = "  		-2147483648";

	// printf("%d\n", atoi(nb));
	// printf("%d\n", ft_atoi(nb));

	//isalpha
	// printf("%d\n", isalpha(20));
	// printf("%d\n", ft_isalpha(20));
	// printf("%d\n", isalpha(89));
	// printf("%d\n", ft_isalpha(89));
	// printf("%d\n", isalpha(96));
	// printf("%d\n", ft_isalpha(96));
	// printf("%d\n", isalpha(321));
	// printf("%d\n", ft_isalpha(321));

	//isdigit
	// printf("%d\n", isdigit('e'));
	// printf("%d\n", ft_isdigit('e'));
	// printf("%d\n", isdigit('8'));
	// printf("%d\n", ft_isdigit('8'));

	//isalnum
	// printf("%d\n", isalnum('a'));
	// printf("%d\n", ft_isalnum('a'));
	// printf("%d\n", isalnum('9'));
	// printf("%d\n", ft_isalnum('9'));
	// printf("%d\n", isalnum(321));
	// printf("%d\n", ft_isalnum(321));

	//isascii
	// printf("%d\n", isascii('\017'));
	// printf("%d\n", ft_isascii('\017'));
	// printf("%d\n", isascii(128));
	// printf("%d\n", ft_isascii(128));

	//isprint
	// printf("%d\n", isprint('\011'));
	// printf("%d\n", ft_isprint('\011'));
	// printf("%d\n", isprint('u'));
	// printf("%d\n", ft_isprint('u'));
	// printf("%d\n", isprint(127));
	// printf("%d\n", ft_isprint(127));

	//toupper
	// printf("%c\n", toupper('a'));
	// printf("%c\n", ft_toupper('a'));
	// printf("%c\n", toupper('~'));
	// printf("%c\n", ft_toupper('~'));
	// printf("%c\n", toupper('Z'));
	// printf("%c\n", ft_toupper('Z'));

	//tolower
	// printf("%c\n", tolower('A'));
	// printf("%c\n", ft_tolower('A'));
	// printf("%c\n", tolower('~'));
	// printf("%c\n", ft_tolower('~'));
	// printf("%c\n", tolower('z'));
	// printf("%c\n", ft_tolower('z'));

	return (0);
}
