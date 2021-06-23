/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncameiri <ncameiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 18:04:41 by ncameiri          #+#    #+#             */
/*   Updated: 2021/06/09 18:24:47 by ncameiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PONY_HPP
# define PONY_HPP
#include<iostream>
#include<string>
class Pony
{
    private:
    
    std::string name;
    int age;
    
    public:
    
    Pony();
    ~Pony();
    void showPonyInfo();
};
void ponyOnTheHeap();
void ponyOnTheStack();

#endif
