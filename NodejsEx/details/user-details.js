var db = require('../config/connection')

module.exports = {

    userRegister: (user, callback) => {
        console.log(user);
        db.get().collection('admin').insertOne(user).then((data) => {
            console.log(data);
            callback(data)
        })
    }


}