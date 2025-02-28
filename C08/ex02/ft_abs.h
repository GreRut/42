/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gruta <gruta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 20:14:05 by gruta             #+#    #+#             */
/*   Updated: 2024/09/07 20:18:11 by gruta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define ABS(Value) ((Value) ^ ((Value) >> (sizeof(Value) * 8 - 1))) \
- ((Value) >> (sizeof(Value) * 8 - 1))