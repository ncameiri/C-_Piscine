/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncameiri <ncameiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 18:00:33 by ncameiri          #+#    #+#             */
/*   Updated: 2021/06/09 18:22:12 by ncameiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Pony.hpp"
#include<iostream>
#include<string>
class test
{
    private:
    std::string ola;
    public:
    test(std::string str);
    void showcontent();
    ~test();
};
test::test(std::string str){
    std::cout<<"CRIAnDO\n";
    std::cin>>this->ola;

    return;
}
test::~test(){
    return;
}
void test::showcontent(){
    std::cout<<this->ola<<std::endl;
    return;
}

int main(){

    //Heap- memoria que fica guardada (fragmenta a memoria) programador tem de alocar )ALOC dinamica
    //Stack -Mantem junta a memoria - alocado automaticamente pelo compilador (menos memoria disponivel) Aloc estatica
    test* oo = new test("elem1");
    test aa("elem2");
    oo->showcontent();
    aa.showcontent();
    delete oo;
    return 1;
}