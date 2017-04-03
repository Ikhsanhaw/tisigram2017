<?php if ( ! defined('BASEPATH')) exit('No direct script access allowed');

/**
 * Model for user identification management
 *
 * This model performs user identification tasks such as logging in users to the website, logging users out, and
 * authenticating password.
 *
 * @package models
 * @author  Ashar Fuadi <fushar@gmail.com>
 */
class Register extends CI_Model 
{
	/**
	 * Logs a user into the website
	 *
	 * This function tries to authenticate the user. If the credentials are valid, then it logs the user into the
	 * website and returns TRUE. If not, it returns FALSE instead.
	 * 
	 * @param  array $credentials The user credentials as an array of the following pairs:
	 *                            - 'username' => The user's username.
	 *                            - 'password' => The user's password.
	 * 
	 * @return boolean            TRUE if the user is successfully logged in, or FALSE otherwise.
	 */
	
	public function getOne($where){
		$query = $this->db->get_where('user',$where);
		
        $query = $query->result_array();

        if(!empty($query)){
        	return $query[0];
        }

	}

	public function add($data){
		return $query = $this->db->insert('user',$data);
	}
}

/* End of file identitiy.php */
/* Location: ./application/models/identitiy.php */
