/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncameiri <ncameiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 18:04:37 by ncameiri          #+#    #+#             */
/*   Updated: 2021/06/09 18:04:38 by ncameiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"Pony.hpp"

Pony::Pony()
{
    std::cout<<"Input Pony name:";
    std::cin>>this->name;
    std::cout<<"Input Pony age:";
    std::cin>>this->age;
}

Pony::~Pony()
{
    return;
}
void Pony::showPonyInfo()
{
    std::cout<<"This Pony's name is:"<<this->name<<std::endl;
    std::cout<<"It's age is:"<<this->age<<std::endl;
}

void ponyOnTheHeap(){
    std::cout<<"ponyOnTheHeap function is running...\n";
    Pony *PonyatHeap=new Pony;
    std::cout<<"Element created showing info\n";
    PonyatHeap->showPonyInfo();
    delete PonyatHeap;

};
void ponyOnTheStack(){
    std::cout<<"ponyOnTheStack function is running...\n";
    Pony PonyatStack;
    std::cout<<"Element created showing info\n";
    PonyatStack.showPonyInfo();
};
