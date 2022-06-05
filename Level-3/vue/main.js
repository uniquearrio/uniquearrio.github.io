const app = Vue.createApp({
    data(){
        return{
            id: 1,
            name: "Zaw Latt",
            age: 19,
            profile: "images/profile.jpg",
            para: '<span style="color: red">This is a text.</span>',
            seen: true,
            mark: 30,
            students: [
                {name: "mg mg" , age: 15 , gender: "male"},
                {name: "AA AA" , age: 15 , gender: "female"},
                {name: "BB BB" , age: 25 , gender: "male"},
            ],
            username: "",
            money: 150.12345,
        }
    },
    methods:{
        reverse(){
        this.name = this.name.split('').reverse().join('')
        },
    },
    computed:{
        girls(){
            return this.students.filter(row=> row.gender=="female")
        },
        boys(){
            return this.students.filter(row=> row.gender=="male")
        },
    },
    filters:{
        currencydecimal (value) {
            return value.toFixed(2)
        }
    }
})